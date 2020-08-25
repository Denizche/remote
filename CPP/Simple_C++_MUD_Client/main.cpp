#include "stdafx.h"

using namespace System;
using namespace System::IO;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Text;
using namespace System::Threading;

void connect( String^ server )
{
   try
   {
	  // Create a TcpClient.
	  // Note, for this client to work you need to have a TcpServer 
	  // connected to the same address as specified by the server, port
	  // combination.
	  Int32 port = 13000;
	  TcpClient^ client = gcnew TcpClient( server, port );

	  // Get a client stream for reading and writing.
	  NetworkStream^ stream = client->GetStream();

	  //Prepare a Byte array to store the servers response
	  array<Byte>^ responseData = gcnew array<Byte>(256);

	  //The repsonse text string
	  String^ response = String::Empty ;

	  // Read the TcpServer's response and store it as bytes.
	  Int32 bytes = stream->Read( responseData, 0, responseData->Length );
	  response = Text::Encoding::ASCII->GetString( responseData, 0, bytes );
	  Console::WriteLine( response );

	  //Enter a new command as raw text 
	  String^ command ;
	  Console::WriteLine( "Type a new command\n" ) ;
	  command = Console::ReadLine() ;

	  // Translate the passed command into ASCII and store it as a Byte array.
	  array<Byte>^ commandData = Text::Encoding::ASCII->GetBytes( command );

	  while( command != "quit" )
	  {
		  // Send the command to the connected TcpServer
		  stream->Write( commandData, 0, commandData->Length );
		  Console::WriteLine( "Sent: {0}", command );
		  
		  //Store the server's response
		  response = String::Empty ;
		 
		  //If there is a message from the server capture and display it
		  responseData->Clear( responseData, 0, 256 ) ;
		 
		  bytes = stream->Read( responseData, 0, responseData->Length );
			
		  //While there is a message available from the server read it
		  while( bytes > 0 )
		  {
			response = Text::Encoding::ASCII->GetString( responseData, 0, bytes );
			Console::WriteLine( "Received: {0}", response );

			bytes = 0 ;
			responseData->Clear( responseData, 0, 256 ) ;
			if( stream->DataAvailable )
			{
				bytes = stream->Read( responseData, 0, responseData->Length );
			}
		  }

		  //Enter a new command as raw text 
		  Console::WriteLine( "Type a new command\n" ) ;
		  command = Console::ReadLine() ;

		  commandData = Text::Encoding::ASCII->GetBytes( command );
		  stream->Write( commandData, 0, commandData->Length );
		  
	  }
	  // Close everything.
	  client->Close();
	
   }
   catch( ArgumentNullException^ e ) 
   {
	  Console::WriteLine( "ArgumentNullException: {0}", e );
   }
   catch( SocketException^ e ) 
   {
	  Console::WriteLine( "SocketException: {0}", e );
   }
}

int main(array<System::String ^> ^args)
{
	connect( "127.0.0.1" ) ;

	return 0;
}