/*
 * Copyright (c) 2020 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AT86RF215REG_H_
#define AT86RF215REG_H_
#ifdef __cplusplus
extern "C" {
#endif


/*Register addresses*/
#define RF09_IRQS                   0x00
#define RF24_IRQS                   0x01
#define BBC0_IRQS                   0x02
#define BBC1_IRQS                   0x03
#define RF_CFG                      0x06
#define RF_IQIFC1                   0x0B
#define RF_PN                       0x0D
#define RF_VN                       0x0E
#define RF_IRQM                     0x00
#define RF_STATE                    0x02
#define RF_CMD                      0x03
#define RF_CS                       0x04
#define RF_CCF0L                    0x05
#define RF_CCF0H                    0x06
#define RF_CNL                      0x07
#define RF_CNM                      0x08
#define RF_RXBWC                    0x09
#define RF_RXDFE                    0x0A
#define RF_AGCC                     0x0B
#define RF_AGCS                     0x0C
#define RF_RSSI                     0x0D
#define RF_EDC                      0x0E
#define RF_EDV                      0x10
#define RF_TXCUTC                   0x12
#define RF_TXDFE                    0x13
#define BBC_IRQM                    0x00
#define BBC_PC                      0x01
#define BBC_RXFLL                   0x04
#define BBC_RXFLH                   0x05
#define BBC_TXFLL                   0x06
#define BBC_TXFLH                   0x07
#define BBC_FBLL                    0x08
#define BBC_FBLH                    0x09
#define BBC_OQPSKC0                 0x10
#define BBC_OQPSKC1                 0x11
#define BBC_OQPSKC2                 0x12
#define BBC_OQPSKC3                 0x13
#define BBC_OQPSKPHRTX              0x14
#define BBC_OQPSKPHRRX              0x15
#define BBC_AFC0                    0x20
#define BBC_AFFTM                   0x22
#define BBC_MACEA0                  0x25
#define BBC_MACPID0F0               0x2D
#define BBC_MACSHA0F0               0x2F
#define BBC_AMCS                    0x40
#define BBC_AMEDT                   0x41
#define BBC_AMAACKTL                0x43
#define BBC_AMAACKTH                0x44
#define BBC_FSKC0                   0x60
#define BBC_FSKC1                   0x61
#define BBC_FSKC2                   0x62
#define BBC0_FBRXS                  0x2000
#define BBC0_FBTXS                  0x2800
#define BBC1_FBRXS                  0x3000
#define BBC1_FBTXS                  0x3800

// RF_AGCC
#define AGCI                        (1 << 6)
#define AVGS                        0x30
#define AVGS_8_SAMPLES              (0 << 4)

// RF_AGCS
#define TGT                         0xE0
#define TGT_1                       (1 << 5)


// RF_RXBWC
#define BW                          0x0F
#define RF_BW2000KHZ_IF2000KHZ      (11 << 0)
#define RF_BW1600KHZ_IF2000KHZ      (10 << 0)
#define RF_BW1250KHZ_IF2000KHZ      (9 << 0)
#define RF_BW1000KHZ_IF1000KHZ      (8 << 0)
#define RF_BW800KHZ_IF1000KHZ       (7 << 0)
#define RF_BW630KHZ_IF1000KHZ       (6 << 0)
#define RF_BW500KHZ_IF500KHZ        (5 << 0)
#define RF_BW400KHZ_IF500KHZ        (4 << 0)
#define RF_BW320KHZ_IF500KHZ        (3 << 0)
#define RF_BW250KHZ_IF250KHZ        (2 << 0)
#define RF_BW200KHZ_IF250KHZ        (1 << 0)
#define RF_BW160KHZ_IF250KHZ        (0 << 0)
#define IFS                         (1 << 4)

// RF_TXCUTC
#define PARAMP                      0xC0
#define RF_PARAMP32U                (3 << 6)
#define RF_PARAMP16U                (2 << 6)
#define RF_PARAMP8U                 (1 << 6)
#define RF_PARAMP4U                 (0 << 6)
#define LPFCUT                      0x0F
#define RF_FLC80KHZ                 (0 << 0)
#define RF_FLC100KHZ                (1 << 0)
#define RF_FLC125KHZ                (2 << 0)
#define RF_FLC160KHZ                (3 << 0)
#define RF_FLC200KHZ                (4 << 0)
#define RF_FLC250KHZ                (5 << 0)
#define RF_FLC315KHZ                (6 << 0)
#define RF_FLC400KHZ                (7 << 0)
#define RF_FLC500KHZ                (8 << 0)
#define RF_FLC625KHZ                (9 << 0)
#define RF_FLC800KHZ                (10 << 0)
#define RF_FLC1000KHZ               (11 << 0)

// RF_TXDFE, RF_RXDFE
#define RCUT                        0xE0
#define RCUT_4                      (4 << 5)
#define RCUT_2                      (2 << 5)
#define RCUT_1                      (1 << 5)
#define RCUT_0                      (0 << 5)
#define SR                          0x0F
#define SR_10                       (10 << 0)
#define SR_8                        (8 << 0)
#define SR_6                        (6 << 0)
#define SR_5                        (5 << 0)
#define SR_4                        (4 << 0)
#define SR_3                        (3 << 0)
#define SR_2                        (2 << 0)
#define SR_1                        (1 << 0)

// BBC_FSKC0
#define MIDX                        0x0E
#define MIDX_10                     (3 << 1)
#define MIDX_05                     (1 << 1)

// BBC_FSKC1
#define SRATE                       0x0F
#define SRATE_400KHZ                (5 << 0)
#define SRATE_300KHZ                (4 << 0)
#define SRATE_200KHZ                (3 << 0)
#define SRATE_150KHZ                (2 << 0)
#define SRATE_100KHZ                (1 << 0)
#define SRATE_50KHZ                 (0 << 0)

// BBC_FSKC2
#define FECIE                       (1 << 0)

// BBC_AFFTM
#define TYPE_2                      (1 << 2)

// BBC_AFC0
#define PM                          (1 << 4)
#define AFEN3                       (1 << 3)
#define AFEN2                       (1 << 2)
#define AFEN1                       (1 << 1)
#define AFEN0                       (1 << 0)

// BBC_OQPSKPHRTX
#define LEG                         (1 << 0)

// BBC_OQPSKC0
#define FCHIP                       0x03
#define BB_FCHIP100                 (0 << 0)
#define BB_FCHIP200                 (1 << 0)
#define BB_FCHIP1000                (2 << 0)
#define BB_FCHIP2000                (3 << 0)

// BBC_OQPSKC2
#define FCSTLEG                     0x04
#define RXM                         0x03
#define FCS_16                      (1 << 2)
#define RXM_2                       (2 << 0)

// BBC_IRQS, BBC_IRQM
#define FBLI                        (1 << 7)
#define AGCR                        (1 << 6)
#define AGCH                        (1 << 5)
#define TXFE                        (1 << 4)
#define RXEM                        (1 << 3)
#define RXAM                        (1 << 2)
#define RXFE                        (1 << 1)
#define RXFS                        (1 << 0)

//BBC_PC
#define PT                          0x03
#define BB_PHYOFF                   (0 << 0)
#define BB_MRFSK                    (1 << 0)
#define BB_MROFDM                   (2 << 0)
#define BB_MROQPSK                  (3 << 0)
#define FCSOK                       (1 << 5)
#define TXAFCS                      (1 << 4)
#define FCST                        (1 << 3)
#define FCSFE                       (1 << 6)

//BBC_AMCS
#define AACKFT                      (1 << 7)
#define AACK                        (1 << 3)
#define CCAED                       (1 << 2)

// RF_IQIFC1
#define CHPM                        0x70
#define RF_MODE_BBRF                (0 << 4)
#define RF_MODE_RF                  (1 << 4)
#define RF_MODE_BBRF09              (4 << 4)
#define RF_MODE_BBRF24              (5 << 4)

/*RF_CFG bits*/
#define IRQMM                       0x08
#define IRQP                        0x04

/*RFn_IRQM bits*/
#define TRXRDY                      (1 << 1)
#define EDC                         (1 << 2)

/*RFn_EDC bits*/
#define EDM                         0x03
#define RF_EDAUTO                   (0 << 0)
#define RF_EDSINGLE                 (1 << 0)
#define RF_EDCONT                   (2 << 0)
#define RF_EDOFF                    (3 << 0)

/*Masks*/
#define CNH                         0x01
#define EDM                         0x03
#define CHPM                        0x70

#ifdef __cplusplus
}
#endif

#endif /* AT86RF215REG_H_ */
