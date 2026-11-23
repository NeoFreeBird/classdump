//
#ifndef TFSScribeThriftVideoCategory_h
#define TFSScribeThriftVideoCategory_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeThriftVideoCategory : NSObject <TBase, NSCoding>

@property (nonatomic) long long videoSubCategory;
@property (readonly, nonatomic) _Bool videoSubCategoryIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithVideoSubCategory:(long long)category;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftVideoCategory_h */
