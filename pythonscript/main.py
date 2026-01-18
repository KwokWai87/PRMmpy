import numpy as np
from scipy.signal import resample


# def decoding_bin_file1(filename):
#     import csv
#     with open(filename, "rb") as f:
#         binary_data = f.read()
#
#     binary_data = binary_data[10:]
#     with open("123.csv", 'w', newline='') as file:
#         writer = csv.writer(file)
#         for number in binary_data:
#             # binary_string = "{:08b}".format(number)
#             writer.writerow(str(number))
#             # [writer.writerow(bit) for bit in binary_string]
#
#     print("done")

# I2S Philips standard/ MSB first
def decoding_bin_file(filename):
    import csv
    with open(filename, "rb") as f:
        binary_data = f.read()

    binary_data = binary_data[10:]
    print(len(binary_data))

    with open("1.csv", 'w', newline='') as file:
        writer = csv.writer(file)
        for i in range(len(binary_data)):
            # audio_data = (binary_data[2*i] << 8) | binary_data[2*i + 1]
            # audio_data = (binary_data[2 * i + 1] << 8) | binary_data[2 * i]
            for bit in "{:08b}".format(binary_data[i]):
                writer.writerow(bit)

        # for i in range(len(binary_data)//2):
        #     audio_data = (binary_data[2*i] << 8) | binary_data[2*i + 1]
        #     # audio_data = (binary_data[2 * i + 1] << 8) | binary_data[2 * i]
        #     for bit in "{:016b}".format(audio_data):
        #         writer.writerow(bit)

    print("done")


#
# def get_pdm_data(filename):
#     pdm_data = []
#     with open(filename, "rb") as f:
#         binary_data = f.read()
#     binary_data = binary_data[10:]
#     for i in range(len(binary_data)):
#         # audio_data = (binary_data[2*i] << 8) | binary_data[2*i + 1]
#         # audio_data = (binary_data[2 * i + 1] << 8) | binary_data[2 * i]
#         for bit in "{:08b}".format(binary_data[i]):
#             pdm_data.append(int(bit))
#     return pdm_data




# def pdm_to_pcm(pdm_data, pdm_clock_rate, pcm_sample_rate):
#     # 配置参数
#     pdm_data = np.array(pdm_data)
#     pdm_clock_period = 1 / pdm_clock_rate
#     pcm_clock_period = 1 / pcm_sample_rate
#
#     # 使用 Resample 进行 PDM 到 PCM 转换
#     pdm_upsample_factor = int(pcm_clock_period / pdm_clock_period)
#     pcm_data = resample(pdm_data, len(pdm_data) * pdm_upsample_factor)
#
#     # 二进制化 PDM 数据
#     pcm_data = np.where(pcm_data > 0, 1, -1)
#
#     # 简化的差分解码，具体的解码方式可能取决于 PDM 数据的格式
#     pcm_data = np.cumsum(pcm_data)
#
#     return pcm_data.astype(np.int16)
#
#
#
# pdm_clock_rate = 3072000  # PDM 时钟速率 (Hz)
# pcm_sample_rate = 48000  # 目标 PCM 采样率 (Hz)
# pdm_data = get_pdm_data("./DMICwith1000Hz.bin")
#
# print(len(pdm_data))
# pcm_data = pdm_to_pcm(pdm_data, pdm_clock_rate, pcm_sample_rate)
#
# print(len(pcm_data))

decoding_bin_file("./100HzSquare.bin")