//
#ifndef _TtC4Grok23ResizableTextFieldModel_h
#define _TtC4Grok23ResizableTextFieldModel_h
@import Foundation;

@class Grok.GrokComposerTextFormatting ?, Grok._ResizableTextView ?, _$s12CoreGraphics7CGFloatVMn ?, _$s7Combine18PassthroughSubjectCMn _$sSaySo7UIImageC _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$sySS _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$s12CoreGraphics7CGFloatVMn ? _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySS _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn __C._NSRange _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo6UIFontC, _TtCs12_SwiftObject;

@interface Grok.ResizableTextFieldModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Grok._ResizableTextView ? $__lazy_storage_$_textView;
    nominal type descriptor for Combine.PassthroughSubject Swift.Array empty-list __C.UIImage nominal type descriptor for Swift.Never imagesPasted;
    Grok.GrokComposerTextFormatting ? textFormatting;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never updateText;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never userModifiedText;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.String nominal type descriptor for Swift.Never currentText;
    nominal type descriptor for Combine.CurrentValueSubject __C._NSRange nominal type descriptor for Swift.Never selectedRange;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isEditing;
    Swift.Int maximumLines;
    nominal type descriptor for CoreGraphics.CGFloat ? heightLimit;
    nominal type descriptor for Combine.CurrentValueSubject nominal type descriptor for CoreGraphics.CGFloat ? nominal type descriptor for Swift.Never currentFieldHeight;
    nominal type descriptor for CoreGraphics.CGFloat ? previousWidth;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    __C.UIFont bodyFont;
}

@end

#endif /* _TtC4Grok23ResizableTextFieldModel_h */
