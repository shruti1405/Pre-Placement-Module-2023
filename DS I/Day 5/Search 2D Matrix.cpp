class Solution 
{    public:
	 bool searchMatrix(vector<vector<int>>& a, int target) 
	{
	   int i = 0;
		int j = a[0].size() - 1;
		while (i < a.size() && j >= 0)
		{
			if (a[i][j] < target)
			{
				i++;
			}
			else if(a[i][j] > target)
			{
				j--; 
			}
			else 
			{
				  return true;  
			} 
		}
		return false;
	}
};