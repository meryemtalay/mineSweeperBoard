import java.util.Random;

/* Meryem Talay
 * meyremtlly@gmail.com
 * This program generates a minesweeper board
 */

public class Minesweeper {

    boolean[][] mineField; // board with mines marked as true
    int rows; // number of rows of the board
    int cols; // number of columns of the board
    int numMines; //number of mines
    
    /*
     * Class Constructor
     * 
     * @param int rows Number of rows of the board
     * 
     * @param int cols Number of columns of the board
     * 
     * @param int numMines Number of mines to be placed on the board
     * 
     */
    Minesweeper(int rows, int cols, int numMines)
    {
        this.rows=rows;
        this.cols=cols;
        this.numMines=numMines;
        mineField = new boolean[rows][cols];
        generateBoard();

        //TODO
    }

    /*
     * Generates the mineField
     * 
     * @param int numMines Number of mines to be placed on the mineField
     * 
     * @return boolean[][] Game board with mines placed at random position
     */
    public void generateBoard()
    {
       //TODO
       Random r = new Random();

  
       for(int i=0; i <rows; i++) 
        {
          for(int j=0; j<cols; j++) 
          {
            mineField[i][j]=false;
          }
        }
        

       
         int count=0;
            while(count!=numMines){
            int x=r.nextInt(rows);
            int y=r.nextInt(cols);
            if(mineField[x][y]!=true)
            {
                mineField[x][y]=true;
                count++;
            }
        }
     }  
    /*
     * Creates the game
     * 
     * @return int[][] The board with cell values computed
     */
    public int[][] generateClues() 
    {
        //TODO
        int [][] clues=new int[rows][cols];
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(mineField[i][j]==true)
                {
                    clues[i][j]=-1;
                }else
                {
                    clues[i][j]=countMines(i,j);
                }
            }
        }
        return clues;
    }

    /*
     * counts the number of adjacent mines to a given cell position
     * 
     * @param int r row position
     * 
     * @param int c column position
     * 
     * @return int number of mines in the surrounding cells
     */
    public int countMines(int r, int c) {
        int count = 0;
        //TODO
        
        
            if(r!=0 && mineField[r-1][c]==true)
            
            count++;

            if(r<rows-1 && mineField[r+1][c]==true)
            
            count++;

            if(c!=0 && mineField[r][c-1]==true)
            
            count++;

            if(c<cols-1 && mineField[r][c+1]==true)
            
            count++;

            if(r!=0 && c!=0 && mineField[r-1][c-1]==true)
            
            count++;

            if(r!=0 && c<cols-1 && mineField[r-1][c+1]==true)
            
            count++;

            if(r<rows-1 && c!=0 && mineField[r+1][c-1]==true)
           
            count++;

            if(r<rows-1 && c<cols-1 && mineField[r+1][c+1]==true)
            
            count++;

        
        return count;
    }
    /*
     * prints the game mine is represented by *
     * 
     * @param int[][] game The game board
     */
    public static void printClues(int[][] clues) {
        //TODO
    }



    public static void main(String[] args) {

    }

}