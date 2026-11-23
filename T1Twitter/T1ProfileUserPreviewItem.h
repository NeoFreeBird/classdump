//
#ifndef T1ProfileUserPreviewItem_h
#define T1ProfileUserPreviewItem_h
@import Foundation;

#include "TFSActiveTextRange-Protocol.h"

@class NSObject, TFSTwitterEntityURL;

@interface T1ProfileUserPreviewItem : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TFSTwitterEntityURL *url;
@property (readonly, nonatomic) id <TFSActiveTextRange> bioTextRange;

/* class methods */
+ (id)previewItemWithURL:(id)url;
+ (id)previewItemWithBioTextActiveRange:(id)range;

/* instance methods */

@end

#endif /* T1ProfileUserPreviewItem_h */
