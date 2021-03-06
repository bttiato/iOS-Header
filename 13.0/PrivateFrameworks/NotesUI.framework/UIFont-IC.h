//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIFont.h>

@interface UIFont (IC)
+ (struct UIFont *)ic_preferredFontForStyle:(unsigned int)arg1 contentSizeCategory:(id)arg2;
+ (long long)ic_stepsBetweenContentSizeCategory:(id)arg1 andCategory:(id)arg2;
+ (id)ic_contentSizeCategories;
+ (double)ic_preferredFontSizeWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3 maxSize:(double)arg4;
+ (struct UIFont *)ic_preferredSystemFontWithBaseSize:(double)arg1 withContentSizeCategory:(id)arg2 minSize:(double)arg3;
+ (struct UIFont *)ic_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2 maxSize:(double)arg3;
+ (struct UIFont *)ic_preferredFontForTextStyle:(id)arg1 adjustedForDefaultSize:(double)arg2;
+ (double)ic_fontSizeForSubheaderImport;
+ (double)ic_fontSizeForHeaderImport;
+ (id)ic_preferredFontForFixedWidthTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)ic_preferredFontForBodyTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)ic_preferredFontForSubheadingTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)ic_preferredFontForHeadingTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)ic_preferredFontForTitleTextWithContentSizeCategory:(id)arg1;
+ (double)ic_pointSizeForBodyTextWithContentSizeCategory:(id)arg1;
+ (struct UIFont *)ic_recentlyDeletedHeaderFont;
+ (struct UIFont *)ic_navBarButtonFontUsingSingleLineA:(_Bool)arg1;
+ (struct UIFont *)ic_gridViewNoteSubtitleFont;
+ (struct UIFont *)ic_gridViewNoteTitleFont;
+ (struct UIFont *)ic_gridViewSectionTitleFont;
+ (struct UIFont *)ic_attachmentBrowserTitleFont;
+ (struct UIFont *)ic_listViewDetailFont;
+ (struct UIFont *)ic_listViewTitleFont;
+ (double)ic_preferredAttachmentTextScale;
+ (id)ic_preferredFontForAttachmentBoldText;
+ (id)ic_preferredFontForAttachmentRegularText;
+ (id)ic_preferredFontForFixedWidthText;
+ (id)ic_preferredFontForDateTextWithZoomFactor:(double)arg1;
+ (id)ic_preferredFontForDateText;
+ (id)ic_preferredFontForBodyText;
+ (id)ic_preferredFontForSubheadingText;
+ (id)ic_preferredFontForHeadingText;
+ (id)ic_preferredFontForTitleText;
- (id)ic_fontWithSize:(double)arg1;
- (id)ic_fontConvertedToSize:(double)arg1;
- (id)ic_fontWithTabularNumbers;
- (_Bool)ic_fontHasSingleLineA;
- (id)ic_fontWithoutSingleLineA;
- (id)ic_fontWithSingleLineA;
@end

