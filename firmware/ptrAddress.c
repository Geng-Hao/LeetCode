
/*假設32位元系統，Little-Endian*/

uint32_t a =0x12345678;


uint8_t *p;


p =(uint8_t*)&a;


// *p = ? => 78


/*假設32位元系統，Little-Endian */

uint32_t a =0x12345678;
uint32_t *p;
p = &a;

//問p+1 = ?


//uint32_t  => 4 bytes;
//又是little Endian 所以位址+4bytes