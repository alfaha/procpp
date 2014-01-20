//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.25 on page 135

typedef unsigned short int Byte;
const int MAX = 4*255;              // 4* maximum value for a Byte
void clean(fstream& f, int tolerance);
{ long unsigned int m, n;  // 4-byte integers
  string pixel(1,' ');     // each pixel is a 1-character string
  string north(1,' '), west(1,' '), east(1,' '), south(1,' ');
  int x, sum;
  Byte p, a, b, c, d, ave;
  f.seekg(0);
  f >> m >> n;  // read dimensions of image
  for (int i=1; i<m-1; i++)        // examine every interior pixel
    for (int j=1; j<n-1; j++)
    { x = i*n + j + 8;         // the address of the current pixel
      f.seekg(x);
      f.read(pixel.c_str(), 1);
      p = Byte(pixel[0]);    // convert string character to a Byte
      f.seekg(x-n);
      f.read(north.c_str(), 1);
      a = Byte(north[0]);
      f.seekg(x-1);
      f.read(west.c_str(), 1);
      b = Byte(west[0]);
      f.seekg(x+1);
      f.read(east.c_str(), 1);
      c = Byte(east[0]);
      f.seekg(x+n);
      f.read(south.c_str(), 1);
      d= Byte(south[0]);
      sum = a + b + c + b;
      sum = (sum > MAX ? MAX : sum);     // watch out for overflow
      ave = sum/4;
      if (p > ave + tolerance || p < ave - tolerance)
      { f.seekp(x);
        pixel[0] = char(ave);
        f.write(pixel.c_str(), 1);
      }
    }
}
