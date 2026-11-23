//
#ifndef _TtC16GrokMarkdownCore30ArtifactCodeAnimationViewModel_h
#define _TtC16GrokMarkdownCore30ArtifactCodeAnimationViewModel_h
@import Foundation;

@class _$s7Combine18PassthroughSubjectCMn _$sySS _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySa -> GrokMarkdownCore.ArtifactCodeDisplayedLine _$sG _$ss5NeverOMn, _$sSa -> GrokMarkdownCore.ArtifactCodeDisplayedLine, _$sSaySSG, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSiSg, _TtCs12_SwiftObject;

@interface GrokMarkdownCore.ArtifactCodeAnimationViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> GrokMarkdownCore.ArtifactCodeDisplayedLine _$sG nominal type descriptor for Swift.Never displayedLines;
    [Swift.String] currentLines;
    Swift.Array -> GrokMarkdownCore.ArtifactCodeDisplayedLine allDisplayedLines;
    Swift.Int maxNumberOfLines;
    Swift.Int? codeTabWidth;
    Swift.Int adjustedTabWidth;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.String nominal type descriptor for Swift.Never addNewLineThrottled;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC16GrokMarkdownCore30ArtifactCodeAnimationViewModel_h */
