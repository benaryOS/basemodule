/* the entry is _start */
ENTRY(_start)

/* let it be binary */
OUTPUT_FORMAT(binary)

/* the usual sections */
SECTIONS
{
	/* load to 0x200000 (2MB) */
	. = 0x200000;

	.text : {
		*(.text)
	}
	.data ALIGN(4096) : {
		*(.data)
	}
	.rodata ALIGN(4096) : {
		*(.rodata)
	}
	.bss ALIGN(4096) : {
		*(.bss)
	}
}
