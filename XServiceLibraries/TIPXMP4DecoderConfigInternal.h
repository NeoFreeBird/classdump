//
#ifndef TIPXMP4DecoderConfigInternal_h
#define TIPXMP4DecoderConfigInternal_h
@import Foundation;

#include "TIPXMP4DecoderConfig-Protocol.h"

@class NSObject, NSString;

@interface TIPXMP4DecoderConfigInternal : NSObject <TIPXMP4DecoderConfig>

@property (readonly, nonatomic) unsigned long long maxDecodableFramesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMaxDecodableFramesCount:(unsigned long long)count;

@end

#endif /* TIPXMP4DecoderConfigInternal_h */
