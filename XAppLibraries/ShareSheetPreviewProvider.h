//
#ifndef ShareSheetPreviewProvider_h
#define ShareSheetPreviewProvider_h
@import Foundation;

#include "_TtP10ShareSheet33ShareSheetPreviewProviderDelegate_-Protocol.h"

@class NSObject;

@interface ShareSheetPreviewProvider : NSObject // (Swift)

@property (nonatomic, weak) id <ShareSheet.ShareSheetPreviewProviderDelegate> delegate;
@property (nonatomic, readonly) long long numberOfPreviews;

/* instance methods */
- (void)beginGeneratingPreviews;
- (void)endGeneratingPreviews;
- (id)previewImageAt:(long long)at;
- (void)reloadPreviews;
- (id)init;

@end

#endif /* ShareSheetPreviewProvider_h */
