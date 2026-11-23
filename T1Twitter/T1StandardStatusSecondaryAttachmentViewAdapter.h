//
#ifndef T1StandardStatusSecondaryAttachmentViewAdapter_h
#define T1StandardStatusSecondaryAttachmentViewAdapter_h
@import Foundation;

#include "T1StandardStatusAttachmentViewAdapter.h"

@interface T1StandardStatusSecondaryAttachmentViewAdapter : T1StandardStatusAttachmentViewAdapter

/* instance methods */
- (unsigned long long)_t1_attachmentTypeForViewModel:(id)model;
- (id)mediaForwardQuotedStatusView;
- (id)autoplayPlayerContainer;

@end

#endif /* T1StandardStatusSecondaryAttachmentViewAdapter_h */
