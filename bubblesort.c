/*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>

void swap(int i, int a[]) {
    int temp = a[i];
    a[i] =  a[i+1];
    a[i+1] = temp;
}

void printa(int a[]){
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", a[i]);
    }
}


int main() {

    int a[10] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11 };
    int swapped = 0;
    while (swapped == 0) {
        for (int i = 0; i < 10; ++i) {
            if(a[i] > a[i+1]) {
                swap(i, a);
                swapped = 1;
            }
        }
        if(swapped == 0) {
            break;
        }
        else {
            swapped = 0;
        }
    }

    printa(a);
    return 0;
}
