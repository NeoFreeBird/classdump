//
#ifndef TTMAssetSubtitles_h
#define TTMAssetSubtitles_h
@import Foundation;

#include "TTMAsset.h"

@class NSArray, NSLocale;

@interface TTMAssetSubtitles : TTMAsset

@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) NSLocale *locale;

/* instance methods */
- (id)init;
- (id)initWithEntries:(id)entries locale:(id)locale;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })assetDimensions;
- (unsigned long long)attachmentType;
- (void)renderPreviewWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderFinalDataWithOptions:(id)options completion:(id /* block */)completion;
- (void)renderWithFormat:(unsigned long long)format completion:(id /* block */)completion;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TTMAssetSubtitles_h */
