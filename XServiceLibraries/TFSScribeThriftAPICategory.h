//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeThriftAPICategory_h
#define TFSScribeThriftAPICategory_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeThriftAPICategory : NSObject <TBase, NSCoding>

@property (nonatomic) long long apiSubCategory;
@property (readonly, nonatomic) _Bool apiSubCategoryIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithApiSubCategory:(long long)category;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftAPICategory_h */
