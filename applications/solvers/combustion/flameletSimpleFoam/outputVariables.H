if(monitoring == true)
{
	Info<< endl << "Monitoring: " << endl;
	Info<< "     + H    (min/max):        " << min(H).value() << "/" << max(H).value() << endl;
	Info<< "     + Z    (min=0/max=1):    " << min(Z).value() << "/" << max(Z).value() << endl;
	Info<< "     + Zvar (min=0/max=0.25): " << min(Zvar).value() << "/" << max(Zvar).value() << endl;
	Info<< endl;
}
