void swap2int(int *val1,int *val2)
{
	if(*val1 != *val2)
	{
	    *val1 = (*val1) ^ (*val2);
	    *val2 = (*val1) ^ (*val2);
	    *val1 = (*val1) ^ (*val2);
	}

}

int inverse_number(int val)
{

	return val;
}

char * base64_decoder(const char *sval)
{
	return NULL;
}
char * base64_encoder(const char *ptrVal)
{
	return NULL;
}
char * url_decoder(const char *ptrVal)
{
	return NULL;
}
char * url_encoder(const char *ptrVal)
{
	return NULL;
}

char *ascii2hex(const char  *ptrVal,size_t size)
{
	return NULL;
}
char *hex2ascii(const char  *ptrVal,size_t size)
{
	return NULL;
}


