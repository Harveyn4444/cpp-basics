#include <bits/stdc++.h>
using namespace std;

string Ones_complement(string data){
    for (int i = 0; i < data.length(); i++){
        if (data[i] == '0')
            data[i] = '1';
        else    
            data[i] = '0';
    }
    return data;
}


string checkSum (string data, int block_size){

    int n = data.length();
    if (n % block_size != 0) {
        int pad_size = block_size - (n % block_size);
        for (int i = 0; i < pad_size; i++){
            data = '0' + data;
        }
    }

    string result = "";

    for (int i = 0; i < block_size; i++){
        result += data[i];
    }

    for (int i = block_size; i < n; i+=block_size){
        string next_block = "";

        for (int j = i; j< i + block_size; j++){
            next_block += data[j];
        }
        string additions = "";
        int sum = 0, carry =0;

        for (int k = block_size - 1; k >= 0; k-- ) {
            sum += (next_block[k] - '0') + (result[k] - '0');
            carry = sum / 2;
            if (sum == 0) {
                additions = '0' + additions;
                sum = carry;
            } 
            else if (sum == 1) {
                additions = '1' + additions;
                sum = carry;
            }
            else if (sum == 2) {
                additions = '0' + additions;
                sum = carry;
            }
            else {
                additions = '1' + additions;
                sum = carry;
            }

        }

        string final = "";


    }

}
