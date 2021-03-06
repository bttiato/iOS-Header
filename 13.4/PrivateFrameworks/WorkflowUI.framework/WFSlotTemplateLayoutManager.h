//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSLayoutManager.h>

#import <WorkflowUI/NSLayoutManagerDelegate-Protocol.h>
#import <WorkflowUI/WFTextAttachmentSizeProvider-Protocol.h>

@class NSString, WFSlotTemplateTextStorage;

@interface WFSlotTemplateLayoutManager : NSLayoutManager <NSLayoutManagerDelegate, WFTextAttachmentSizeProvider>
{
    _Bool _isLayoutManagerForTextView;
    _Bool _extendSlotBackgroundOffEdges;
}

@property(nonatomic) _Bool extendSlotBackgroundOffEdges; // @synthesize extendSlotBackgroundOffEdges=_extendSlotBackgroundOffEdges;
@property(nonatomic) _Bool isLayoutManagerForTextView; // @synthesize isLayoutManagerForTextView=_isLayoutManagerForTextView;
- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (_Bool)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout struct CGRect *)arg2 lineFragmentUsedRect:(inout struct CGRect *)arg3 baselineOffset:(inout double *)arg4 inTextContainer:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (_Bool)layoutManager:(id)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
- (void)getCalculatedLineHeight:(double *)arg1 originalFontLineHeight:(double *)arg2;
- (double)preferredHeightForDrawingTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2 withProposedHeight:(double)arg3;
- (_Bool)shouldDrawTextAttachment:(id)arg1 atCharacterIndex:(unsigned long long)arg2;
- (void)drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)enumerateEnclosingRectsForGlyphRange:(struct _NSRange)arg1 insetForBackground:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateInsetEnclosingRectsForGlyphRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateEnclosingRectsForSlot:(id)arg1 includeInsideSpacing:(_Bool)arg2 insetForBackground:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) unsigned long long numberOfLaidLines;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) WFSlotTemplateTextStorage *textStorage; // @dynamic textStorage;

@end

