class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int medianIdx = nums1.size() + nums2.size();
        int med1 = 0;
        int med2 = 0;
        if(medianIdx % 2 == 0){
            med1 = (medianIdx / 2) - 1;
            med2 = med1 + 1;
        }
        else{
            med1 = medianIdx / 2;
            med2 = -1;
        }
        int valmed1;
        int valmed2;
        
        int count = 0;
        int i=0, j=0;
        while((i< nums1.size() || j<nums2.size()) && (count<=med1 || count <=med2)){
            if(i != nums1.size() && j != nums2.size() && nums1[i] <= nums2[j]){
                cout<<1<<endl;
                if(med1 == count){
                    valmed1 = nums1[i];
                }
                else if(med2 == count && med2 != -1){
                    valmed2 = nums1[i];
                }
                ++count;
                ++i;
            }
            else if(i != nums1.size() && j != nums2.size() && nums2[j] <= nums1[i]){
                  cout<<2<<endl;
                if(med1 == count){
                    valmed1 = nums2[j];
                }
                else if(med2 == count && med2 != -1){
                    valmed2 = nums2[j];
                }
                ++count;
                ++j;
            }
            else if(i == nums1.size()){
                  cout<<3<<endl;
                if(med1 == count){
                    valmed1 = nums2[j];
                }
                else if(med2 == count && med2 != -1){
                    valmed2 = nums2[j];
                }
                ++count;
                ++j;
            }
            else if(j == nums2.size()){
                  cout<<4<<endl;
                if(med1 == count){
                    valmed1 = nums1[i];
                }
                else if(med2 == count && med2 != -1){
                    valmed2 = nums1[i];
                }
                ++count;
                ++i;
            }
            cout<<"valmed "<<valmed1<<endl;
        }
        
        if(med2 != -1){
            return ((double)valmed1 + (double)valmed2) / 2.0;
        }
        
        return valmed1;
        
    }
};