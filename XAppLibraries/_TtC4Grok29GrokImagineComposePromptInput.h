//
#ifndef _TtC4Grok29GrokImagineComposePromptInput_h
#define _TtC4Grok29GrokImagineComposePromptInput_h
@import Foundation;

#include "_TtP4Grok37GrokImagineComposePromptInputDelegate_-Protocol.h"

@class Grok.GrokImagineComposePromptInputViewModel, Grok0A33ImagineComposePromptInputDelegate_pSgXw, NSString, _$s10TFNUISwift11HostingViewCN, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface Grok.GrokImagineComposePromptInput : type metadata for TFNUISwift.HostingView { // (Swift)
    /* instance variables */
    Grok.GrokImagineComposePromptInputViewModel viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic) _Bool enabled;
@property (nonatomic, weak) id <Grok.GrokImagineComposePromptInputDelegate> delegate;

/* instance methods */
- (_Bool)isEnabled;
- (id)initWithPlaceholder:(id)placeholder;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC4Grok29GrokImagineComposePromptInput_h */
