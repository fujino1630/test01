int main()
{
	// SampleStringMain();

	System::String^ S1 = "A";
	System::String^ S2 = "B";
	System::String^ S3 = "A";
	System::String^ S4;
	System::Console::WriteLine("[START]");

	//if (!System::String::IsNullOrEmpty(S1) && !System::String::IsNullOrEmpty(S2))
	{
		if (S1->Equals(S3) && S2->Equals(S4))
		{
            System::Console::WriteLine("一致");
        }
		else
		{
            System::Console::WriteLine("不一致");
		}
	}

	//if (!System::String::IsNullOrEmpty(S3) && !System::String::IsNullOrEmpty(S4))
	{
		if (System::Object::Equals(S3, S1) && System::Object::Equals(S4, S2))
		{
            System::Console::WriteLine("一致");
        }
		else
		{
            System::Console::WriteLine("不一致");
		}
	}
	System::Console::WriteLine("[FINISH]");

	return 0;
}