//
#ifndef TFSScribeThriftDataCategory_h
#define TFSScribeThriftDataCategory_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"
#include "TFSScribeThriftAPICategory.h"
#include "TFSScribeThriftAudioCategory.h"
#include "TFSScribeThriftImageCategory.h"
#include "TFSScribeThriftOtherCategory.h"
#include "TFSScribeThriftVideoCategory.h"
#include "TFSScribeThriftWebCategory.h"

@class NSObject, NSString;

@interface TFSScribeThriftDataCategory : NSObject <TBase, NSCoding>

@property (retain, nonatomic) TFSScribeThriftImageCategory *imageCategory;
@property (readonly, nonatomic) _Bool imageCategoryIsSet;
@property (retain, nonatomic) TFSScribeThriftVideoCategory *videoCategory;
@property (readonly, nonatomic) _Bool videoCategoryIsSet;
@property (retain, nonatomic) TFSScribeThriftAudioCategory *audioCategory;
@property (readonly, nonatomic) _Bool audioCategoryIsSet;
@property (retain, nonatomic) TFSScribeThriftAPICategory *apiCategory;
@property (readonly, nonatomic) _Bool apiCategoryIsSet;
@property (retain, nonatomic) TFSScribeThriftWebCategory *webCategory;
@property (readonly, nonatomic) _Bool webCategoryIsSet;
@property (retain, nonatomic) TFSScribeThriftOtherCategory *otherCategory;
@property (readonly, nonatomic) _Bool otherCategoryIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImageCategory:(id)category videoCategory:(id)category audioCategory:(id)category apiCategory:(id)category webCategory:(id)category otherCategory:(id)category;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftDataCategory_h */
