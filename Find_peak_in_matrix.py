from typing import List
def findPeakGrid(mat: List[List[int]]) -> List[int]:
    row = len(mat)
    col = len(mat[0])
    i,j = 0,0
    ans = []
    def check_peak(i,j):
        max_val=mat[i][j]
        max_box = [i,j]
        if i-1>=0 and mat[i][j] <  mat[i-1][j]:
            if mat[i-1][j] > max_val:
                max_val = mat[i-1][j]
                max_box = [i-1,j]
        if j+1<col and mat[i][j] <  mat[i][j+1]:
            if mat[i][j+1] > max_val:
                max_val = mat[i][j+1]
                max_box = [i,j+1]
        if i+1<row and mat[i][j] <  mat[i+1][j]:
            if mat[i+1][j] > max_val:
                max_val = mat[i+1][j]
                max_box = [i+1,j]
            
        if j-1>=0 and mat[i][j] <  mat[i][j-1]:
            if mat[i][j-1] > max_val:
                max_val = mat[i][j-1]
                max_box = [i,j-1]
        return max_box
    # if check_list[i] == 0 => that the ith box is larger
    while i<row and j<col:
        max_box = check_peak(i,j)
        # print(max_box)
        if max_box[0]==i and max_box[1]==j:
            ans.append(i)
            ans.append(j)
            return ans
        else:
            i=max_box[0]
            j=max_box[1]
                    
    return []

def main():
    mat = [[1,2,6],[3,4,5]]
    max_ind = findPeakGrid(mat)
    print(f"One of the peak is at position {max_ind[0]},{max_ind[1]}")

if __name__ == "__main__":
    main()