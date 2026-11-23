//
#ifndef T1MediaAttachmentsTimelineCarouselLayout_h
#define T1MediaAttachmentsTimelineCarouselLayout_h
@import Foundation;

#include "T1MediaAttachmentsViewLayout.h"

@interface T1MediaAttachmentsTimelineCarouselLayout : T1MediaAttachmentsViewLayout

/* instance methods */
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)path;
- (void)invalidateLayoutWithContext:(id)context;

@end

#endif /* T1MediaAttachmentsTimelineCarouselLayout_h */
