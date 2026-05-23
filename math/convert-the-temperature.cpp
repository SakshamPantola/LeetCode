class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double kelvin = celsius+273.15;
        double farh = celsius*1.8 + 32;
        ans.push_back(kelvin);
        ans.push_back(farh);

    return ans;
    }
};