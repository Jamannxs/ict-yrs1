//Name: Pitchaporn	Songprakob
//ID: 6288045
//Section: 2

public class Player {

	public enum PlayerType {Healer, Tank, Samurai, BlackMage, Phoenix, Cherry};
	
	private PlayerType type; 	//Type of this player. Can be one of either Healer, Tank, Samurai, BlackMage, or Phoenix
	private double maxHP;		//Max HP of this player
	private double currentHP;	//Current HP of this player 
	private double atk;			//Attack power of this player
	private int numSpecialTurns;
	private boolean sleepy;
	private boolean cursed;
	private boolean taunted;
	private Player lowHp;
	private int turns = 0;
	private Arena.Team team;
	private Arena.Row row;
	private int position;
	
	/**
	 * Constructor of class Player, which initializes this player's type, maxHP, atk, numSpecialTurns, 
	 * as specified in the given table. It also reset the internal turn count of this player. 
	 * @param _type
	 */
	public Player(PlayerType _type)
	{	
		//INSERT YOUR CODE HERE
		this.type = _type;
		switch (this.type) {
			case Healer :
				this.maxHP = 4790;
				this.currentHP = 4790;
				this.atk = 238;
				this.numSpecialTurns = 4;
				break;
			case Tank :
				this.maxHP = 5340;
				this.currentHP = 5340;
				this.atk = 255;
				this.numSpecialTurns = 4;
				break;
			case Samurai :
				this.maxHP = 4005;
				this.currentHP = 4005;
				this.atk = 368;
				this.numSpecialTurns = 3;
				break;
			case BlackMage :
				this.maxHP = 4175;
				this.currentHP = 4175;
				this.atk = 303;
				this.numSpecialTurns = 4;
				break;
			case Phoenix :
				this.maxHP = 4175;
				this.currentHP = 4175;
				this.atk = 209;
				this.numSpecialTurns = 8;
				break;
			case Cherry :
				this.maxHP = 3560;
				this.currentHP = 3560;
				this.atk = 198;
				this.numSpecialTurns = 4;
				break;
		}
	}
	
	/**
	 * Returns the current HP of this player
	 * @return
	 */
	public double getCurrentHP()
	{
		//INSERT YOUR CODE HERE
		return this.currentHP;
	}
	
	/**
	 * Returns type of this player
	 * @return
	 */
	public Player.PlayerType getType()
	{
		//INSERT YOUR CODE HERE
		return this.type;
	}
	
	/**
	 * Returns max HP of this player. 
	 * @return
	 */
	public double getMaxHP()
	{
		//INSERT YOUR CODE HERE
		return this.maxHP;
	}
	
	/**
	 * Returns whether this player is sleeping.
	 * @return
	 */
	public boolean isSleeping()
	{
		//INSERT YOUR CODE HERE
		if(sleepy) {
			return true;
		}
		return false;
	}
	
	/**
	 * Returns whether this player is being cursed.
	 * @return
	 */
	public boolean isCursed()
	{
		//INSERT YOUR CODE HERE
		if(cursed) {
			return true;
		}
		return false;
	}
	
	/**
	 * Returns whether this player is alive (i.e. current HP > 0).
	 * @return
	 */
	public boolean isAlive()
	{
		//INSERT YOUR CODE HERE
		if(this.currentHP>0) {
			return true;
		}
		return false;
	}
	
	/**
	 * Returns whether this player is taunting the other team.
	 * @return
	 */
	public boolean isTaunting()
	{
		//INSERT YOUR CODE HERE
		if(taunted) {
			return true;
		}
		return false;
	}
	
	/**
	 * This method displays how to attack the target and prints them out.
	 * @param target
	 */
	public void attack(Player target)
	{	
		//INSERT YOUR CODE HERE
		if(target.isAlive()) {
			target.currentHP -= this.atk;
			if(!target.isAlive()) {
				target.currentHP = 0;
			}
			System.out.println("# "+displayData()+" Attacks "+target.displayData());
		}
	}
	
	/**
	 * This method displays the special ability of each type. 
	 * @param myTeam
	 * @param theirTeam
	 */
	public void useSpecialAbility(Player[][] myTeam, Player[][] theirTeam)
	{	
		//INSERT YOUR CODE HERE
		Player target = null;
		this.turns = 0;
		switch (this.type) {
			case Healer :
				if(!isCursed()) {
					target = LowHp(myTeam);
					if(target.currentHP==target.maxHP) {
						break;
					}
					else {
						target.currentHP += (0.25*target.maxHP);
						if(target.currentHP>=target.maxHP) {
							target.currentHP = target.maxHP;
						}
					}
				}
				System.out.println("# "+displayData()+" Heals "+target.displayData());
				break;
			case Tank :
				this.taunted = true;
				System.out.println("# "+displayData()+" is Taunting");
				break;
			case Samurai :
				target = findTarget(theirTeam);
				if(target.isAlive()) {
					target.currentHP -= 2*this.atk;
					if(!target.isAlive()) {
						target.currentHP = 0;
					}
					System.out.println("# "+displayData()+" Double-Slashes "+target.displayData());
				}
				break;
			case BlackMage :
				target = findTarget(theirTeam);
				if(target!=null) {
					if(target.isAlive()) {
						target.cursed = true;
						System.out.println("# "+displayData()+" Curses "+target.displayData());
					}
				}
				break;
			case Phoenix :
				target = findSurvivor(myTeam);
				if(target!=null) {
					target.currentHP += (0.3*target.maxHP);
					target.turns = 0;
					System.out.println("# "+displayData()+" Revives "+target.displayData());
				}
				break;
			default :
				target = findTarget(theirTeam);
				for(int i=0;i<theirTeam.length;i++) {
					for(int j=0;j<theirTeam[i].length;j++) {
						if(theirTeam[i][j].isAlive()) {
							theirTeam[i][j].sleepy = true;
							System.out.println("# "+displayData()+" Feeds a Fortune Cookie to "+theirTeam[i][j].displayData());
						}
					}
				}
				break;
		}
	}
	
	
	/**
	 * This method is called by Arena when it is this player's turn to take an action. 
	 * By default, the player simply just "attack(target)". However, once this player has 
	 * fought for "numSpecialTurns" rounds, this player must perform "useSpecialAbility(myTeam, theirTeam)"
	 * where each player type performs his own special move. 
	 * @param arena
	 */
	public void takeAction(Arena arena)
	{	
		//INSERT YOUR CODE HERE
		if(arena.isMemberOf(this, Arena.Team.A)) {
			if(!isSleeping()&&isAlive()) {
				this.turns++;
				if(this.turns>=this.numSpecialTurns) {
					useSpecialAbility(arena.getTeamAB(Arena.Team.A),arena.getTeamAB(Arena.Team.B));
				}
				else {
					attack(findTarget(arena.getTeamAB(Arena.Team.B)));
				}
			}
		}
		else {
			if(!isSleeping()&&isAlive()) {
				this.turns++;
				if(this.turns==this.numSpecialTurns) {
					useSpecialAbility(arena.getTeamAB(Arena.Team.B),arena.getTeamAB(Arena.Team.A));
				}
				else {
					attack(findTarget(arena.getTeamAB(Arena.Team.A)));
				}
			}
		}	
	}
	
	/**
	 * This method overrides the default Object's toString() and is already implemented for you. 
	 */
	@Override
	public String toString()
	{
		return "["+this.type.toString()+" HP:"+this.currentHP+"/"+this.maxHP+" ATK:"+this.atk+"]["
				+((this.isCursed())?"C":"")
				+((this.isTaunting())?"T":"")
				+((this.isSleeping())?"S":"")
				+"]";
	}
	
	/**
	 * This method finds the lowest blood player in team who still alive. If there are 2 more players 
	 * that have the same lowest blood value, return the earlier order.
	 * @param team
	 * @return
	 */
	public Player LowHp(Player[][] team) {
		double min = Double.MAX_VALUE;
		this.lowHp = team[0][0];
		for(int i=0;i<team.length;i++) {
			for(int j=0;j<team[i].length;j++) {
				if(team[i][j].isAlive()) {
					if((team[i][j].getCurrentHP())/team[i][j].getMaxHP()<min) {
						min = (team[i][j].getCurrentHP())/team[i][j].getMaxHP();
						this.lowHp = team[i][j];
					}
				}
			}
		}
		for(int i=0;i<team.length;i++) {
			for(int j=0;j<team[i].length;j++) {
				if(min==(team[i][j].getCurrentHP())/team[i][j].getMaxHP()) {
					this.lowHp = team[i][j];
					return this.lowHp;
				}
			}
		}
		return null;
	}
	
	/**
	 * This method finds the player who still alive and taunted. If not, finds the player 
	 * who is in the earliest order and still alive.
	 * @param team
	 * @return 
	 */
	public Player findTarget(Player[][] team) {
		for(int i=0;i<team.length;i++) {
			for(int j=0;j<team[i].length;j++) {
				if(team[i][j].isAlive()&&team[i][j].isTaunting()) {
					return team[i][j];
				}
			}
		}
		int one = 0, row = 0 , two = 0;
		double hp = Double.MAX_VALUE ;
		for(int i=0;i<team[0].length;i++) {
			if(team[0][i].isAlive()) {
				one++;
			}
		}
		if(one>0) {row = 0;}else {row = 1;}
		for(int i=0;i<team[row].length;i++) {
			if(team[row][i].isAlive()) {
				if(team[row][i].currentHP<hp) {
					hp = team[row][i].currentHP;
					two = i;
				}
			}
		}
		return team[row][two];
	}
	
	/**
	 * This method finds dead player in myTeam and return that player. If not, return null
	 * @param myTeam
	 * @return
	 */
	public Player findSurvivor(Player[][] myTeam) {
		Player survivor = null;
		for(int i=0;i<myTeam.length;i++) {
			for(int j=0;j<myTeam[i].length;j++) {
				if(!myTeam[i][j].isAlive()) {
					survivor = myTeam[i][j];
					return survivor;
				}
			}
		}
		return survivor;
	}
	
	/**
	 * This method sets values of team, row, position from Class Arena and declare in this class variable.
	 * @param team
	 * @param row
	 * @param position
	 */
	public void setData(Arena.Team team,Arena.Row row,int position) {
		this.team = team;
		this.row = row;
		this.position = position;
	}
	
	/**
	 * This method forms data in team[row][position] {Type}
	 * @return
	 */
	public String displayData() {
		return this.team+"["+this.row+"]"+"["+this.position+"] {"+this.type+"}";
	}
	
	/**
	 * This method clears status of Sleeping of entire team.
	 * @param team
	 * @return
	 */
	public static Player[][] clearSleepy(Player[][] team){
		for(int i=0; i<team.length ; i++) {
			for(int j=0; j<team[i].length ; j++) {
				team[i][j].sleepy = false;
			}
		}
		return team;
	}
	
	/**
	 * This method clears status of Cursing of entire team.
	 * @param team
	 * @return
	 */
	public static Player[][] clearCursed(Player[][] team){
		for(int i=0; i<team.length ; i++) {
			for(int j=0; j<team[i].length ; j++) {
				team[i][j].cursed = false;
			}
		}
		return team;
	}
	
	/**
	 * This method clears status of Taunting of entire team.
	 * @param team
	 * @return
	 */
	public static Player[][] clearTaunted(Player[][] team){
		for(int i=0; i<team.length ; i++) {
			for(int j=0; j<team[i].length ; j++) {
				team[i][j].taunted = false;
			}
		}
		return team;
	}
	
}
