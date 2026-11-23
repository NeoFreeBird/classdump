//
#ifndef TFSScribeThriftAudioCategory_h
#define TFSScribeThriftAudioCategory_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"

@class NSObject, NSString;

@interface TFSScribeThriftAudioCategory : NSObject <TBase, NSCoding>

@property (nonatomic) long long audioSubCategory;
@property (readonly, nonatomic) _Bool audioSubCategoryIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAudioSubCategory:(long long)category;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftAudioCategory_h */
