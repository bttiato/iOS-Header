//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCXmlTextWriterProvider : NSObject
{
    struct _xmlTextWriter *_textWriter;
}

@property(readonly, nonatomic) struct _xmlTextWriter *textWriter; // @synthesize textWriter=_textWriter;
- (_Bool)tearDown;
- (_Bool)setUpWithTextWriter:(struct _xmlTextWriter *)arg1;
- (_Bool)setUp;
- (void)dealloc;

@end

