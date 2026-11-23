//
#ifndef TFSScribeThriftRufousScribeLogCollection_h
#define TFSScribeThriftRufousScribeLogCollection_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface TFSScribeThriftRufousScribeLogCollection : NSObject <TBase, NSCoding>

@property (copy, nonatomic) NSDictionary *logs;
@property (readonly, nonatomic) _Bool logsIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLogs:(id)logs;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftRufousScribeLogCollection_h */
