//
#ifndef T1RichTextFormatViewController_h
#define T1RichTextFormatViewController_h
@import Foundation;

@class NSString, TFNRichTextFormatView, TFNViewController;

@interface T1RichTextFormatViewController : TFNViewController

@property (retain, nonatomic) TFNRichTextFormatView *textView;
@property (copy, nonatomic) NSString *documentPath;

/* instance methods */
- (id)initWithRichTextFormatDocumentPath:(id)path;
- (void)loadView;
- (void)_t1_updateDynamicColors;
- (unsigned long long)tfn_supportedInterfaceOrientations;

@end

#endif /* T1RichTextFormatViewController_h */
