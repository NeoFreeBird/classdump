//
#ifndef _TtC8ElkSwift9LabelCell_h
#define _TtC8ElkSwift9LabelCell_h
@import Foundation;

#include "_TtC8ElkSwift4Cell.h"

@class ElkSwift.HorizontalLabelAlignment, ElkSwift.KVector, ElkSwift.VerticalLabelAlignment, Swift.Bool, _$sSa -> ElkSwift.LabelAdapter, _$sSd;

@interface ElkSwift.LabelCell : ElkSwift.Cell { // (Swift)
    /* instance variables */
    Swift.Bool horizontalLayoutMode;
    ElkSwift.HorizontalLabelAlignment horizontalAlignment;
    ElkSwift.VerticalLabelAlignment verticalAlignment;
    Swift.Double gap;
    Swift.Array -> ElkSwift.LabelAdapter labels;
    ElkSwift.KVector minimumContentAreaSize;
}

@end

#endif /* _TtC8ElkSwift9LabelCell_h */
