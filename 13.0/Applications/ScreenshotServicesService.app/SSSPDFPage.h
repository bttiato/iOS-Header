//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFPage.h>

@interface SSSPDFPage : PDFPage
{
    _Bool _isSaving;
    double _vellumOpacity;
}

@property(nonatomic) _Bool isSaving; // @synthesize isSaving=_isSaving;
@property(nonatomic) double vellumOpacity; // @synthesize vellumOpacity=_vellumOpacity;
- (void)drawWithBox:(long long)arg1 toContext:(struct CGContext *)arg2;

@end

