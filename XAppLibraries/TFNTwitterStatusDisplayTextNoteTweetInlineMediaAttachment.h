//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterStatusDisplayTextNoteTweetInlineMediaAttachment_h
#define TFNTwitterStatusDisplayTextNoteTweetInlineMediaAttachment_h
@import Foundation;

#include "TFNTwitterStatusDisplayTextAttachment.h"

@class TFSTwitterNoteTweetInlineMedia;

@interface TFNTwitterStatusDisplayTextNoteTweetInlineMediaAttachment : TFNTwitterStatusDisplayTextAttachment

@property (readonly, nonatomic) TFSTwitterNoteTweetInlineMedia *noteTweetInlineMedia;

/* instance methods */
- (id)initWithData:(id)data ofType:(id)type;
- (id)initWithNoteTweetInlineMedia:(id)media;

@end

#endif /* TFNTwitterStatusDisplayTextNoteTweetInlineMediaAttachment_h */
