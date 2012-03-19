#pragma once

#include <DB/DataStreams/IBlockInputStream.h>
#include <DB/DataStreams/IBlockOutputStream.h>


namespace DB
{

struct BlockIO
{
	BlockInputStreamPtr in;
	BlockOutputStreamPtr out;

	Block in_sample;	/// Пример блока, который будет прочитан из in.
	Block out_sample;	/// Пример блока, которого нужно писать в out.
};

}
