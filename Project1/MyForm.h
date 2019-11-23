#pragma once
#include "string"

class citys
{

public:

	citys(int x, int y, std::string n)
	{
		set_x_pos(x);
		set_y_pos(y);
		set_name(n);
	}

	void set_x_pos(int x)
	{
		x_pos = x;
	}
	void set_y_pos(int y)
	{
		y_pos = y;
	}
	void set_name(std::string n)
	{
		name = n;

	}

	int get_x_pos()
	{
		return x_pos;
	}
	int get_y_pos()
	{
		return y_pos;
	}
	std::string get_name()
	{
		return name;
	}


private:
	int x_pos;
	int y_pos;
	std::string name;
};


namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;
	using namespace System::Text;
	int i = 0;
	std::string temp = "";
	wchar_t tempo;
	
	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			citys Ka(10, 10, "Karlsruhe");
			Ka.get_name();
		}



	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ MapArea;
	private: System::Windows::Forms::CheckBox^ AsternCheckBox;
	private: System::Windows::Forms::CheckBox^ DijkstraCheckBox;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::ComboBox^ StartBox;
	private: System::Windows::Forms::ComboBox^ DestinationBox;
	private: System::Windows::Forms::Label^ FromLabel;
	private: System::Windows::Forms::Label^ ToLabel;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ newMapButton;
	private: System::Windows::Forms::OpenFileDialog^ NewMapDialog;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::ComboBox^ EmptyBox;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;




	private: System::ComponentModel::IContainer^ components;

	protected:

	public:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->MapArea = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AsternCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->DijkstraCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->StartBox = (gcnew System::Windows::Forms::ComboBox());
			this->DestinationBox = (gcnew System::Windows::Forms::ComboBox());
			this->FromLabel = (gcnew System::Windows::Forms::Label());
			this->ToLabel = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->newMapButton = (gcnew System::Windows::Forms::Button());
			this->NewMapDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->EmptyBox = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->MapArea->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// MapArea
			// 
			this->MapArea->BackColor = System::Drawing::SystemColors::Window;
			this->MapArea->Controls->Add(this->label3);
			this->MapArea->Location = System::Drawing::Point(9, 10);
			this->MapArea->Margin = System::Windows::Forms::Padding(2);
			this->MapArea->Name = L"MapArea";
			this->MapArea->Size = System::Drawing::Size(821, 731);
			this->MapArea->TabIndex = 0;
			this->MapArea->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MapArea_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(639, 408);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"label3";
			// 
			// AsternCheckBox
			// 
			this->AsternCheckBox->AutoSize = true;
			this->AsternCheckBox->Location = System::Drawing::Point(858, 157);
			this->AsternCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->AsternCheckBox->Name = L"AsternCheckBox";
			this->AsternCheckBox->Size = System::Drawing::Size(61, 17);
			this->AsternCheckBox->TabIndex = 1;
			this->AsternCheckBox->Text = L"A-Stern";
			this->AsternCheckBox->UseVisualStyleBackColor = true;
			// 
			// DijkstraCheckBox
			// 
			this->DijkstraCheckBox->AutoSize = true;
			this->DijkstraCheckBox->Location = System::Drawing::Point(937, 157);
			this->DijkstraCheckBox->Margin = System::Windows::Forms::Padding(2);
			this->DijkstraCheckBox->Name = L"DijkstraCheckBox";
			this->DijkstraCheckBox->Size = System::Drawing::Size(61, 17);
			this->DijkstraCheckBox->TabIndex = 2;
			this->DijkstraCheckBox->Text = L"Dijkstra";
			this->DijkstraCheckBox->UseVisualStyleBackColor = true;
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(858, 179);
			this->StartButton->Margin = System::Windows::Forms::Padding(2);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(154, 52);
			this->StartButton->TabIndex = 3;
			this->StartButton->Text = L"Start";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			// 
			// StartBox
			// 
			this->StartBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->StartBox->FormattingEnabled = true;
			this->StartBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Berlin" });
			this->StartBox->Location = System::Drawing::Point(858, 58);
			this->StartBox->Margin = System::Windows::Forms::Padding(2);
			this->StartBox->Name = L"StartBox";
			this->StartBox->Size = System::Drawing::Size(155, 21);
			this->StartBox->TabIndex = 4;
			this->StartBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::StartBox_SelectedIndexChanged);
			// 
			// DestinationBox
			// 
			this->DestinationBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->DestinationBox->FormattingEnabled = true;
			this->DestinationBox->Location = System::Drawing::Point(858, 116);
			this->DestinationBox->Margin = System::Windows::Forms::Padding(2);
			this->DestinationBox->Name = L"DestinationBox";
			this->DestinationBox->Size = System::Drawing::Size(155, 21);
			this->DestinationBox->TabIndex = 5;
			// 
			// FromLabel
			// 
			this->FromLabel->AutoSize = true;
			this->FromLabel->BackColor = System::Drawing::Color::Transparent;
			this->FromLabel->Location = System::Drawing::Point(855, 33);
			this->FromLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->FromLabel->Name = L"FromLabel";
			this->FromLabel->Size = System::Drawing::Size(33, 13);
			this->FromLabel->TabIndex = 6;
			this->FromLabel->Text = L"From:";
			// 

			// ToLabel
			// 
			this->ToLabel->AutoSize = true;
			this->ToLabel->Location = System::Drawing::Point(855, 92);
			this->ToLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ToLabel->Name = L"ToLabel";
			this->ToLabel->Size = System::Drawing::Size(23, 13);
			this->ToLabel->TabIndex = 7;
			this->ToLabel->Text = L"To:";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(869, 328);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(0, 13);
			this->linkLabel1->TabIndex = 8;
			// 
			// newMapButton
			// 
			this->newMapButton->Location = System::Drawing::Point(858, 689);
			this->newMapButton->Margin = System::Windows::Forms::Padding(2);
			this->newMapButton->Name = L"newMapButton";
			this->newMapButton->Size = System::Drawing::Size(154, 52);
			this->newMapButton->TabIndex = 9;
			this->newMapButton->Text = L"New Map";
			this->newMapButton->UseVisualStyleBackColor = true;
			this->newMapButton->Click += gcnew System::EventHandler(this, &MyForm::newMapButton_Click);
			// 
			// NewMapDialog
			// 
			this->NewMapDialog->FileName = L"NewMapDialog";
			this->NewMapDialog->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::NewMapDialog_FileOk);
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// EmptyBox
			// 
			this->EmptyBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
			this->EmptyBox->FormattingEnabled = true;
			this->EmptyBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Berlin" });
			this->EmptyBox->Location = System::Drawing::Point(1003, 344);
			this->EmptyBox->Margin = System::Windows::Forms::Padding(2);
			this->EmptyBox->Name = L"EmptyBox";
			this->EmptyBox->Size = System::Drawing::Size(10, 21);
			this->EmptyBox->TabIndex = 10;
			this->EmptyBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(859, 375);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(152, 262);
			this->richTextBox1->TabIndex = 12;
			this->richTextBox1->Text = L"A-Stern:\nKnoten durchlaufen:\t0\nBenöritgte Zeit\t0\n\nDjkstra:\nKnoten durchlaufen:\t0\n"
				L"Benöritgte Zeit\t0";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 770);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->EmptyBox);
			this->Controls->Add(this->newMapButton);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->ToLabel);
			this->Controls->Add(this->FromLabel);
			this->Controls->Add(this->DestinationBox);
			this->Controls->Add(this->StartBox);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->DijkstraCheckBox);
			this->Controls->Add(this->AsternCheckBox);
			this->Controls->Add(this->MapArea);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Wegefindung";
			this->MapArea->ResumeLayout(false);
			this->MapArea->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
	private: System::Void MapArea_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) 
	{
		
	}
	private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Graphics^ pg = MapArea->CreateGraphics();
		Pen^ pen1 = gcnew Pen(Color::Black);
		SolidBrush^ sb1 = gcnew SolidBrush(Color::Red);
		citys peng(100, 100, "ke");
		string tempo = peng.get_name();
		//wchar_t tempo ;
		//tempo = (wchar_t)peng.get_name().c_str();
		if (StartBox->SelectedItem == EmptyBox->SelectedItem)
		{
			MessageBox::Show("Sie müssen einen Startpunkt auswählen");
			return;
		}

		this->StartBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"%s", tempo });
		this->DestinationBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { StartBox->SelectedItem });
		this->DestinationBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { i });

		while (i < 1000)
		{
		pg->DrawLine(pen1, 55 + i, 55 + i, 105, 255);
		pg->FillEllipse(sb1, peng.get_x_pos(), 50 + i, 10, 10);
		pg->FillEllipse(sb1, 100, 250, 10, 10);
		label3->Location = System::Drawing::Point(60 + i, 50 + i);
		this->label3->Text = L"Berlin";
		i = i + 100;
		}



	}
	private: System::Void StartBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
	
	
	}
	private: System::Void NewMapDialog_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) 
	{


	}
	private: System::Void newMapButton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		NewMapDialog->Filter = "Txt Files (*.txt)|*.txt";
		NewMapDialog->ShowDialog();
	
		//String^ test = NewMapDialog->FileName;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	}

	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{

	

	}
};
}
