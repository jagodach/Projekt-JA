#include "pch.h"
#include "ImageProcessingCpp.h"


	  ImageProcessingCpp::ImageProcessingCpp()
	  {
		  this->bmpConverter = gcnew BitmapConverter();
	  }

	  System::Drawing::Bitmap^ ImageProcessingCpp::ProcessImageForHistogram(System::Drawing::Bitmap^ inputImage)
	  {
		  int height = inputImage->Height;
		  int width = inputImage->Width;
		  unsigned char* bitmapByteArray = this->bmpConverter->ConvertBitmapToByte(inputImage);

		  //GenerateHistogram(bitmapByteArray, width, height);
		  return inputImage;
	  }


