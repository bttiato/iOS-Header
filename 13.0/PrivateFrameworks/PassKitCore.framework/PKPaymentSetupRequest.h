//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, PKPaymentSetupConfiguration;

@interface PKPaymentSetupRequest : NSObject <NSSecureCoding>
{
    PKPaymentSetupConfiguration *_configuration;
    NSArray *_paymentSetupFeatures;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *paymentSetupFeatures; // @synthesize paymentSetupFeatures=_paymentSetupFeatures;
@property(retain, nonatomic) PKPaymentSetupConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

