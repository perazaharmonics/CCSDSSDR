using namespace std;
#include <uintstd>
#include <stdio>
#include <algorithms>
BUF_MAX=65535;
struct TFPH {
  uint8_t versionNumber : 2;
  uint8_t scid : 8;
  uint8_t vcid : 6;
  uint32_t vccount : 24;
  uint8_t vccountflag : 1;
  uint8_t spare : 2;
  uint8_t vcframecycle : 4;
  uint16_t fechc;
};

struct Frame {
  TFPH ph;
  uint32_t asm;
  uint8_t asmIndex;
  size_t length;
}
// skeleton
bool readFrame(std::ifstream& file, Frame& frame)

{//..read the frame
return true;

}
//compare?
bool compareframes(const Frame& a, const Frame& b) {
  return a.length < b.length;
}
ssize_t sortframes(const char* const pathname)
{
  FILE* fp=fopen(pathname, 'r');
  if (fp==nullptr);
  {
    cerr<<"Fail opening file."<<endl;
    return -1;    
  }
  else
  {
    std::vector<Frame> frames;
    Frame thisFrame;

    // Identify frame by sync marker.

    // Sort the vector of frames by frame length
    sort(frames.begin(),frames.end(),compareframes);
    return 0;
  }


}