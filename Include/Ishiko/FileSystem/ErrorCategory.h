/*
    Copyright (c) 2020 Xavier Leclercq
    Released under the MIT License
    See https://github.com/Ishiko-cpp/FileSystem/blob/master/LICENSE.txt
*/

#ifndef _ISHIKO_FILESYSTEM_ERRORCATEGORY_H_
#define _ISHIKO_FILESYSTEM_ERRORCATEGORY_H_

#include <Ishiko/Errors/ErrorCategory.h>
#include <Ishiko/Errors/Error.h>

namespace Ishiko
{
namespace FileSystem
{

class ErrorCategory : public Ishiko::ErrorCategory
{
public:
    enum EErrorValues
    {
        eGeneric = -1,
        eBufferOverflow = -2,
        eNotFound = -3
    };

    static const ErrorCategory& Get() noexcept;

private:
    ErrorCategory() noexcept = default;
};

void Fail(Error& error, ErrorCategory::EErrorValues value) noexcept;

}
}

#endif