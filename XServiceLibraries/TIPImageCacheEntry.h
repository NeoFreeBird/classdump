//
#ifndef TIPImageCacheEntry_h
#define TIPImageCacheEntry_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TIPCompleteImageEntryContext.h"
#include "TIPImageContainer.h"
#include "TIPLRUEntry-Protocol.h"
#include "TIPPartialImage.h"
#include "TIPPartialImageEntryContext.h"

@class NSData, NSObject, NSString;

@interface TIPImageCacheEntry : NSObject <NSCopying, TIPLRUEntry>

@property (retain, nonatomic) NSData *completeImageData;
@property (copy, nonatomic) NSString *completeImageFilePath;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) TIPImageContainer *completeImage;
@property (retain, nonatomic) TIPCompleteImageEntryContext *completeImageContext;
@property (retain, nonatomic) TIPPartialImage *partialImage;
@property (retain, nonatomic) TIPPartialImageEntryContext *partialImageContext;
@property (retain, nonatomic) TIPImageCacheEntry *nextLRUEntry;
@property (weak, nonatomic) TIPImageCacheEntry *previousLRUEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCacheEntry:(id)entry;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)shouldAccessMoveLRUEntryToHead;
- (id)LRUEntryIdentifier;

@end

#endif /* TIPImageCacheEntry_h */
