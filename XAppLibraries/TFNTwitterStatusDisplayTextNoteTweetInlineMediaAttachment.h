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
