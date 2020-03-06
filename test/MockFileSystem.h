/*
 * This file is part of Adblock Plus <https://adblockplus.org/>,
 * Copyright (C) 2006-present eyeo GmbH
 *
 * Adblock Plus is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * Adblock Plus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Adblock Plus.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ADBLOCK_PLUS_MOCK_FILE_SYSTEM_H
#define ADBLOCK_PLUS_MOCK_FILE_SYSTEM_H

#include <AdblockPlus/IFileSystem.h>

#include <gmock/gmock.h>

namespace AdblockPlus
{
  class MockFileSystem : public IFileSystem
  {
  public:
    MOCK_CONST_METHOD3(Read, void(const std::string& fileName,
                                  const ReadCallback& doneCallback,
                                  const Callback& errorCallback));

    MOCK_METHOD3(Write, void(const std::string& fileName,
                             const IOBuffer& data,
                             const Callback& callback));

    MOCK_METHOD3(Move, void(const std::string& fromFileName, 
                            const std::string& toFileName,
                            const Callback& callback));

    MOCK_METHOD2(Remove, void(const std::string& fileName, 
                              const Callback& callback));

    MOCK_CONST_METHOD2(Stat, void(const std::string& fileName,
                                  const StatCallback& callback));
  };
}

#endif
