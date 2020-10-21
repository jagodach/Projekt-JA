#include <string>
#include "BitmapConverter.h"

ref class ImageProcessingCpp
{
private: const char* path = "\\..\\..\\..\\..\\x64\\Debug\\ImageProcessingCpp.dll";
private: BitmapConverter^ bmpConverter;

public: ImageProcessingCpp();
//private:	   __declspec(dllimport) void GenerateHistogram(unsigned char* bitmap, int width, int height);
public: System::Drawing::Bitmap^ ProcessImageForHistogram(System::Drawing::Bitmap^ inputImage);
};

