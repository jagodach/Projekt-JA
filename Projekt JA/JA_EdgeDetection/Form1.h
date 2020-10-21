#pragma once
#include "ImageProcessingCpp.h"

namespace CppCLRWinformsProjekt {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ normalImagePictureBox;
	protected:
	private: System::Windows::Forms::PictureBox^ normalImageHistogramPictureBox;
	private: System::Windows::Forms::PictureBox^ processedImagePictureBox;
	private: System::Windows::Forms::PictureBox^ processedImageHistogramPictureBox;
	private: System::Windows::Forms::Label^ labelNormalImage;
	private: System::Windows::Forms::Label^ labelNormalHistogram;
	private: System::Windows::Forms::Label^ labelProcessedImage;
	private: System::Windows::Forms::Label^ labelProcessedHistogram;
	private: System::Windows::Forms::GroupBox^ groupBoxNormal;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ buttonLoad;
	private: System::Windows::Forms::Button^ buttonRun;
	private: System::Windows::Forms::TrackBar^ trackBarThreads;

	private: System::Windows::Forms::Label^ labelThreads;
	private: System::Windows::Forms::Label^ labelAmountOfThreads;
	private: System::Windows::Forms::GroupBox^ groupBoxConfiguration;
	private: System::Windows::Forms::RadioButton^ radioButtonASM;
	private: System::Windows::Forms::RadioButton^ radioButtonCpp;
	private: System::Windows::Forms::Label^ labelDLLs;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;

		   ///Class fields
	private: int numberOfThreads = 1;
	private: System::Drawing::Bitmap^ inputImage = nullptr;
	private: ImageProcessingCpp^ imageProcessorCpp = gcnew ImageProcessingCpp();
	private: System::Windows::Forms::Label^ labelElapsedTime;
	private: System::Windows::Forms::Label^ labelElapsedTimeModifiable;




	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->normalImagePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->normalImageHistogramPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->processedImagePictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->processedImageHistogramPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->labelNormalImage = (gcnew System::Windows::Forms::Label());
			this->labelNormalHistogram = (gcnew System::Windows::Forms::Label());
			this->labelProcessedImage = (gcnew System::Windows::Forms::Label());
			this->labelProcessedHistogram = (gcnew System::Windows::Forms::Label());
			this->groupBoxNormal = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			this->buttonRun = (gcnew System::Windows::Forms::Button());
			this->trackBarThreads = (gcnew System::Windows::Forms::TrackBar());
			this->labelThreads = (gcnew System::Windows::Forms::Label());
			this->labelAmountOfThreads = (gcnew System::Windows::Forms::Label());
			this->groupBoxConfiguration = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonASM = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonCpp = (gcnew System::Windows::Forms::RadioButton());
			this->labelDLLs = (gcnew System::Windows::Forms::Label());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->labelElapsedTime = (gcnew System::Windows::Forms::Label());
			this->labelElapsedTimeModifiable = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalImagePictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalImageHistogramPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->processedImagePictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->processedImageHistogramPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarThreads))->BeginInit();
			this->groupBoxConfiguration->SuspendLayout();
			this->SuspendLayout();
			// 
			// normalImagePictureBox
			// 
			this->normalImagePictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->normalImagePictureBox->Location = System::Drawing::Point(12, 26);
			this->normalImagePictureBox->Name = L"normalImagePictureBox";
			this->normalImagePictureBox->Size = System::Drawing::Size(223, 213);
			this->normalImagePictureBox->TabIndex = 0;
			this->normalImagePictureBox->TabStop = false;
			// 
			// normalImageHistogramPictureBox
			// 
			this->normalImageHistogramPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->normalImageHistogramPictureBox->Location = System::Drawing::Point(260, 26);
			this->normalImageHistogramPictureBox->Name = L"normalImageHistogramPictureBox";
			this->normalImageHistogramPictureBox->Size = System::Drawing::Size(223, 213);
			this->normalImageHistogramPictureBox->TabIndex = 1;
			this->normalImageHistogramPictureBox->TabStop = false;
			// 
			// processedImagePictureBox
			// 
			this->processedImagePictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->processedImagePictureBox->Location = System::Drawing::Point(508, 26);
			this->processedImagePictureBox->Name = L"processedImagePictureBox";
			this->processedImagePictureBox->Size = System::Drawing::Size(223, 213);
			this->processedImagePictureBox->TabIndex = 2;
			this->processedImagePictureBox->TabStop = false;
			// 
			// processedImageHistogramPictureBox
			// 
			this->processedImageHistogramPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->processedImageHistogramPictureBox->Location = System::Drawing::Point(757, 26);
			this->processedImageHistogramPictureBox->Name = L"processedImageHistogramPictureBox";
			this->processedImageHistogramPictureBox->Size = System::Drawing::Size(223, 213);
			this->processedImageHistogramPictureBox->TabIndex = 3;
			this->processedImageHistogramPictureBox->TabStop = false;
			// 
			// labelNormalImage
			// 
			this->labelNormalImage->AutoSize = true;
			this->labelNormalImage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelNormalImage->Location = System::Drawing::Point(73, 242);
			this->labelNormalImage->Name = L"labelNormalImage";
			this->labelNormalImage->Size = System::Drawing::Size(89, 31);
			this->labelNormalImage->TabIndex = 4;
			this->labelNormalImage->Text = L"Image";
			// 
			// labelNormalHistogram
			// 
			this->labelNormalHistogram->AutoSize = true;
			this->labelNormalHistogram->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelNormalHistogram->Location = System::Drawing::Point(309, 242);
			this->labelNormalHistogram->Name = L"labelNormalHistogram";
			this->labelNormalHistogram->Size = System::Drawing::Size(138, 31);
			this->labelNormalHistogram->TabIndex = 5;
			this->labelNormalHistogram->Text = L"Histogram";
			// 
			// labelProcessedImage
			// 
			this->labelProcessedImage->AutoSize = true;
			this->labelProcessedImage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelProcessedImage->Location = System::Drawing::Point(578, 242);
			this->labelProcessedImage->Name = L"labelProcessedImage";
			this->labelProcessedImage->Size = System::Drawing::Size(89, 31);
			this->labelProcessedImage->TabIndex = 6;
			this->labelProcessedImage->Text = L"Image";
			// 
			// labelProcessedHistogram
			// 
			this->labelProcessedHistogram->AutoSize = true;
			this->labelProcessedHistogram->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelProcessedHistogram->Location = System::Drawing::Point(807, 242);
			this->labelProcessedHistogram->Name = L"labelProcessedHistogram";
			this->labelProcessedHistogram->Size = System::Drawing::Size(138, 31);
			this->labelProcessedHistogram->TabIndex = 7;
			this->labelProcessedHistogram->Text = L"Histogram";
			// 
			// groupBoxNormal
			// 
			this->groupBoxNormal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBoxNormal->Location = System::Drawing::Point(3, 5);
			this->groupBoxNormal->Name = L"groupBoxNormal";
			this->groupBoxNormal->Size = System::Drawing::Size(488, 278);
			this->groupBoxNormal->TabIndex = 8;
			this->groupBoxNormal->TabStop = false;
			this->groupBoxNormal->Text = L"Before";
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(497, 5);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(488, 278);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"After";
			// 
			// buttonLoad
			// 
			this->buttonLoad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonLoad->Location = System::Drawing::Point(517, 305);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(172, 55);
			this->buttonLoad->TabIndex = 10;
			this->buttonLoad->Text = L"Load Image";
			this->buttonLoad->UseVisualStyleBackColor = true;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &Form1::LoadImage);
			// 
			// buttonRun
			// 
			this->buttonRun->Enabled = false;
			this->buttonRun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonRun->Location = System::Drawing::Point(517, 387);
			this->buttonRun->Name = L"buttonRun";
			this->buttonRun->Size = System::Drawing::Size(172, 55);
			this->buttonRun->TabIndex = 11;
			this->buttonRun->Text = L"Run ";
			this->buttonRun->UseVisualStyleBackColor = true;
			this->buttonRun->Click += gcnew System::EventHandler(this, &Form1::ProcessImage);
			// 
			// trackBarThreads
			// 
			this->trackBarThreads->Location = System::Drawing::Point(6, 61);
			this->trackBarThreads->Maximum = 24;
			this->trackBarThreads->Minimum = 1;
			this->trackBarThreads->Name = L"trackBarThreads";
			this->trackBarThreads->Size = System::Drawing::Size(474, 45);
			this->trackBarThreads->TabIndex = 12;
			this->trackBarThreads->Value = 1;
			this->trackBarThreads->Scroll += gcnew System::EventHandler(this, &Form1::TrackBarThreadsValueChanged);
			// 
			// labelThreads
			// 
			this->labelThreads->AutoSize = true;
			this->labelThreads->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelThreads->Location = System::Drawing::Point(5, 38);
			this->labelThreads->Name = L"labelThreads";
			this->labelThreads->Size = System::Drawing::Size(75, 20);
			this->labelThreads->TabIndex = 13;
			this->labelThreads->Text = L"Threads: ";
			// 
			// labelAmountOfThreads
			// 
			this->labelAmountOfThreads->AutoSize = true;
			this->labelAmountOfThreads->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelAmountOfThreads->Location = System::Drawing::Point(72, 38);
			this->labelAmountOfThreads->Name = L"labelAmountOfThreads";
			this->labelAmountOfThreads->Size = System::Drawing::Size(18, 20);
			this->labelAmountOfThreads->TabIndex = 14;
			this->labelAmountOfThreads->Text = L"1";
			// 
			// groupBoxConfiguration
			// 
			this->groupBoxConfiguration->Controls->Add(this->radioButtonASM);
			this->groupBoxConfiguration->Controls->Add(this->radioButtonCpp);
			this->groupBoxConfiguration->Controls->Add(this->labelDLLs);
			this->groupBoxConfiguration->Controls->Add(this->trackBarThreads);
			this->groupBoxConfiguration->Controls->Add(this->labelAmountOfThreads);
			this->groupBoxConfiguration->Controls->Add(this->labelThreads);
			this->groupBoxConfiguration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->groupBoxConfiguration->Location = System::Drawing::Point(3, 289);
			this->groupBoxConfiguration->Name = L"groupBoxConfiguration";
			this->groupBoxConfiguration->Size = System::Drawing::Size(488, 164);
			this->groupBoxConfiguration->TabIndex = 15;
			this->groupBoxConfiguration->TabStop = false;
			this->groupBoxConfiguration->Text = L"Configuration";
			// 
			// radioButtonASM
			// 
			this->radioButtonASM->AutoSize = true;
			this->radioButtonASM->Location = System::Drawing::Point(120, 107);
			this->radioButtonASM->Name = L"radioButtonASM";
			this->radioButtonASM->Size = System::Drawing::Size(62, 24);
			this->radioButtonASM->TabIndex = 20;
			this->radioButtonASM->Text = L"ASM";
			this->radioButtonASM->UseVisualStyleBackColor = true;
			this->radioButtonASM->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButtonCheckedChanged);
			// 
			// radioButtonCpp
			// 
			this->radioButtonCpp->AutoSize = true;
			this->radioButtonCpp->Checked = true;
			this->radioButtonCpp->Location = System::Drawing::Point(58, 107);
			this->radioButtonCpp->Name = L"radioButtonCpp";
			this->radioButtonCpp->Size = System::Drawing::Size(56, 24);
			this->radioButtonCpp->TabIndex = 19;
			this->radioButtonCpp->TabStop = true;
			this->radioButtonCpp->Text = L"C++";
			this->radioButtonCpp->UseVisualStyleBackColor = true;
			this->radioButtonCpp->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButtonCheckedChanged);
			// 
			// labelDLLs
			// 
			this->labelDLLs->AutoSize = true;
			this->labelDLLs->Location = System::Drawing::Point(9, 109);
			this->labelDLLs->Name = L"labelDLLs";
			this->labelDLLs->Size = System::Drawing::Size(43, 20);
			this->labelDLLs->TabIndex = 16;
			this->labelDLLs->Text = L"DLL:";
			// 
			// openFileDialog
			// 
			this->openFileDialog->Filter = L"Bitmaps|*.bmp";
			// 
			// labelElapsedTime
			// 
			this->labelElapsedTime->AutoSize = true;
			this->labelElapsedTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelElapsedTime->Location = System::Drawing::Point(843, 409);
			this->labelElapsedTime->Name = L"labelElapsedTime";
			this->labelElapsedTime->Size = System::Drawing::Size(142, 20);
			this->labelElapsedTime->TabIndex = 16;
			this->labelElapsedTime->Text = L"Elapsed Time [ms]:";
			// 
			// labelElapsedTimeModifiable
			// 
			this->labelElapsedTimeModifiable->AutoSize = true;
			this->labelElapsedTimeModifiable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelElapsedTimeModifiable->Location = System::Drawing::Point(906, 436);
			this->labelElapsedTimeModifiable->Name = L"labelElapsedTimeModifiable";
			this->labelElapsedTimeModifiable->Size = System::Drawing::Size(18, 20);
			this->labelElapsedTimeModifiable->TabIndex = 17;
			this->labelElapsedTimeModifiable->Text = L"0";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(989, 465);
			this->Controls->Add(this->labelElapsedTimeModifiable);
			this->Controls->Add(this->labelElapsedTime);
			this->Controls->Add(this->buttonRun);
			this->Controls->Add(this->buttonLoad);
			this->Controls->Add(this->labelProcessedHistogram);
			this->Controls->Add(this->labelProcessedImage);
			this->Controls->Add(this->labelNormalHistogram);
			this->Controls->Add(this->labelNormalImage);
			this->Controls->Add(this->processedImageHistogramPictureBox);
			this->Controls->Add(this->processedImagePictureBox);
			this->Controls->Add(this->normalImageHistogramPictureBox);
			this->Controls->Add(this->normalImagePictureBox);
			this->Controls->Add(this->groupBoxNormal);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBoxConfiguration);
			this->Name = L"Form1";
			this->Text = L"Edge Detection";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalImagePictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->normalImageHistogramPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->processedImagePictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->processedImageHistogramPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarThreads))->EndInit();
			this->groupBoxConfiguration->ResumeLayout(false);
			this->groupBoxConfiguration->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TrackBarThreadsValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		labelAmountOfThreads->Text = trackBarThreads->Value.ToString();
		numberOfThreads = trackBarThreads->Value;
	}

	private: System::Void RadioButtonCheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		radioButtonASM->Checked = !radioButtonCpp->Checked;
	}

	private: System::Void LoadImage(System::Object^ sender, System::EventArgs^ e)
	{
		openFileDialog->ShowDialog();
		if (openFileDialog->FileName != nullptr)
		{
			try
			{
				inputImage = gcnew Bitmap(openFileDialog->FileName);
				Bitmap^ inputImageResized = gcnew Bitmap(inputImage, 223, 213);

				normalImagePictureBox->Image = inputImageResized;
			}
			catch (Exception ^ ex)
			{
				MessageBox^ msgBox;
				msgBox->Show(L"Error loading the image: " + ex->Message, L"Error");
			}
		}

		this->buttonRun->Enabled = true;
	}
	private: System::Void ProcessImage(System::Object^ sender, System::EventArgs^ e)
	{
		Bitmap^ bitmapForHistogram = gcnew Bitmap(inputImage);
		imageProcessorCpp->ProcessImageForHistogram(bitmapForHistogram);
	}
	};
}
