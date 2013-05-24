/////////////////////////////////////////////////////////////////////////////
// StringUtils.h
/////////////////////////////////////////////////////////////////////////////

#pragma once

/////////////////////////////////////////////////////////////////////////////
// Includes
/////////////////////////////////////////////////////////////////////////////

#include <Windows.h>
#include <string>

/////////////////////////////////////////////////////////////////////////////
// Global Function Prototypes
/////////////////////////////////////////////////////////////////////////////

std::string FileReadString(FILE* pFile);
BOOL FileWriteString(FILE* pFile, const std::string& text);
std::string GetNextLine(const std::string& text, size_t& pos);
std::string TrimLeft(const std::string& text);
std::string TrimRight(const std::string& text);
std::string FormatString(const char * format, ...);
