//
#ifndef TFSScribeThriftOtherLink_h
#define TFSScribeThriftOtherLink_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeThriftOtherLink : NSObject <TBase, NSCoding>

@property (nonatomic) _Bool unusedField;
@property (readonly, nonatomic) _Bool unusedFieldIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithUnusedField:(_Bool)field;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftOtherLink_h */
