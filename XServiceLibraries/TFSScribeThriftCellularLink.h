//
#ifndef TFSScribeThriftCellularLink_h
#define TFSScribeThriftCellularLink_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeThriftCellularLink : NSObject <TBase, NSCoding>

@property (nonatomic) long long cellular;
@property (readonly, nonatomic) _Bool cellularIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCellular:(long long)cellular;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftCellularLink_h */
