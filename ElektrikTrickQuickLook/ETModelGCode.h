//
//  ETModelGCode.h
//  Electrictrick
//
//  Created by Matthias Melcher on 6/26/14.
//  Copyright (c) 2014 M.Melcher GmbH. All rights reserved.
//

#ifndef __Electrictrick__ETModelGCode__
#define __Electrictrick__ETModelGCode__

#include "ETWireframeModel.h"

class ETEdge;

class ETModelGCode : public ETWireframeModel
{
public:
    static ETModel *Create(uint8_t *buf, size_t size);
public:
    ETModelGCode();
    virtual ~ETModelGCode();
    virtual int Load();
};

#endif /* defined(__Electrictrick__ETModelGCode__) */
